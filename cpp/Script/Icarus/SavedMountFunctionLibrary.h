// /Script/Icarus.SavedMountFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/AI/Mounts/SavedMountFunctionLibrary.h

UCLASS()
class USavedMountFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void BakeMountPreviewToTexture(UTextureRenderTarget2D* RenderTarget, AIcarusMountCharacter* Mount);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void DeleteMountPreviewTexture(FString MountUID);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<FMountSaveData> GetAllPersistentMountData(APlayerController* Player);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static bool GetPersistentMountDataForItemGUID(APlayerController* Player, FString DatabaseItemGUID, FMountSaveData& SavedData, bool bPopFromSave);  // parameters 0x8A
    UFUNCTION(BlueprintCallable) static bool ReloadMountData(UObject* WorldContextObject, const FMountSaveData& SavedData, const FVector& AtLocation, AIcarusMountCharacter*& Mount);  // parameters 0x91
    UFUNCTION(BlueprintCallable) static bool ReloadMountDataAssociatedItemGUID(APlayerController* Player, FString DatabaseItemGUID, const FVector& AtLocation, AIcarusMountCharacter*& Mount);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void RemovePersistentMountData(APlayerController* Player, const TArray<FMountSaveData>& MountDataToRemove);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static bool SavePersistentMountData(APlayerController* Player, FString DatabaseItemGUID, AIcarusMountCharacter* Mount);  // parameters 0x21
};
