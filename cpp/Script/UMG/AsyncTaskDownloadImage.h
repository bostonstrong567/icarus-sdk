// /Script/UMG.AsyncTaskDownloadImage
// Derives from: UBlueprintAsyncActionBase > UObject
// size 0x50, declared in Engine/Source/Runtime/UMG/Public/Blueprint/AsyncTaskDownloadImage.h

UCLASS()
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
    UPROPERTY(BlueprintAssignable) FDownloadImageDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FDownloadImageDelegate OnFail;  // 0x0040, size 0x10

    UFUNCTION(BlueprintCallable) static UAsyncTaskDownloadImage* DownloadImage(FString URL);  // parameters 0x18
};
