// Copyright (c) 2020 LootLocker

#include "Demo/DemoPurchases.h"

void ADemoPurchases::DemoPurchaseAssets()
{
   ULootLockerSDKManager::PurchaseAssets(PurchaseData, FPurchaseResponseDelegate::CreateUObject(this, &ADemoPurchases::OnPurchaseAssetsCompleted));
}

void ADemoPurchases::DemoPurchaseAssetsAndroid()
{
   ULootLockerSDKManager::PurchaseAssetsAndroid(AndroidPurchaseData, FPurchaseResponseDelegate::CreateUObject(this, &ADemoPurchases::OnPurchaseAssetsAndroidCompleted));
}

void ADemoPurchases::DemoVerifyPurchaseIos()
{
   ULootLockerSDKManager::VerifyPurchaseIos(IosPurchaseData, FPurchaseResponseDelegate::CreateUObject(this, &ADemoPurchases::OnVerifyPurchaseIosCompleted));
}

void ADemoPurchases::DemoPollPurchaseStatus()
{
   ULootLockerSDKManager::PollPurchaseStatus(PurchaseId, FPurchaseStatusResponseDelegate::CreateUObject(this, &ADemoPurchases::OnPollPurchaseStatusCompleted));
}

void ADemoPurchases::DemoActivateRentalAsset()
{
   ULootLockerSDKManager::ActivateRentalAsset(AssetId, FActivateRentalAssetResponseDelegate::CreateUObject(this, &ADemoPurchases::OnActivateRentalAssetCompleted));
}

void ADemoPurchases::OnPurchaseAssetsCompleted(FPurchaseResponse Response)
{
    UE_LOG(LogTemp, Verbose, TEXT("OnPurchaseAssetsCompleted Response: \nSuccess: %b\nFull text from server: %s"), Response.success, *Response.FullTextFromServer);
}

void ADemoPurchases::OnPurchaseAssetsAndroidCompleted(FPurchaseResponse Response)
{
    UE_LOG(LogTemp, Verbose, TEXT("OnPurchaseAssetsAndroidCompleted Response: \nSuccess: %b\nFull text from server: %s"), Response.success, *Response.FullTextFromServer);
}

void ADemoPurchases::OnVerifyPurchaseIosCompleted(FPurchaseResponse Response)
{
    UE_LOG(LogTemp, Verbose, TEXT("OnVerifyPurchaseIosCompleted Response: \nSuccess: %b\nFull text from server: %s"), Response.success, *Response.FullTextFromServer);
}

void ADemoPurchases::OnPollPurchaseStatusCompleted(FPurchaseStatusResponse Response)
{
    UE_LOG(LogTemp, Verbose, TEXT("OnPollPurchaseStatusCompleted Response: \nSuccess: %b\nFull text from server: %s"), Response.success, *Response.FullTextFromServer);
}

void ADemoPurchases::OnActivateRentalAssetCompleted(FActivateRentalAssetResponse Response)
{
    UE_LOG(LogTemp, Verbose, TEXT("OnActivateRentalAssetCompleted Response: \nSuccess: %b\nFull text from server: %s"), Response.success, *Response.FullTextFromServer);
}