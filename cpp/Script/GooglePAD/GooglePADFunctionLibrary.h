// /Script/GooglePAD.GooglePADFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Runtime/GooglePAD/Source/GooglePAD/Classes/GooglePADFunctionLibrary.h

UCLASS()
class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static EGooglePADErrorCode CancelDownload(TArray<FString> AssetPacks);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static EGooglePADErrorCode GetAssetPackLocation(FString Name, int32& Location);  // parameters 0x15
    UFUNCTION(BlueprintCallable) static FString GetAssetsPath(int32 Location);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static int32 GetBytesDownloaded(int32 State);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static EGooglePADErrorCode GetDownloadState(FString Name, int32& State);  // parameters 0x15
    UFUNCTION(BlueprintCallable) static EGooglePADDownloadStatus GetDownloadStatus(int32 State);  // parameters 0x5
    UFUNCTION(BlueprintCallable) static EGooglePADErrorCode GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus& Status);  // parameters 0x2
    UFUNCTION(BlueprintCallable) static EGooglePADStorageMethod GetStorageMethod(int32 Location);  // parameters 0x5
    UFUNCTION(BlueprintCallable) static int32 GetTotalBytesToDownload(int32 State);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void ReleaseAssetPackLocation(int32 Location);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void ReleaseDownloadState(int32 State);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static EGooglePADErrorCode RequestDownload(TArray<FString> AssetPacks);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static EGooglePADErrorCode RequestInfo(TArray<FString> AssetPacks);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static EGooglePADErrorCode RequestRemoval(FString Name);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static EGooglePADErrorCode ShowCellularDataConfirmation();  // parameters 0x1
};
