// /Game/BP/UI/InventoryPlayer/BP_PlayerPreviewManager.BP_PlayerPreviewManager_C
// Derives from: AActor > UObject
// size 0x318, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_PlayerPreviewManager_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ULevelStreamingDynamic* LoadedStreamingLevel;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> CurrentWorld;  // 0x0238, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_PlayerPreview_HAB_C* PreviewCharacter;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterCosmetics CosmeticData;  // 0x0268, size 0x60
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPreviewCameraSettingsEnum CameraFocus;  // 0x02C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> DesiredDiorama;  // 0x02D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentFadeAmount;  // 0x0300, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FLevelLoaded LevelLoaded;  // 0x0308, size 0x10

    UFUNCTION(BlueprintCallable) void BeginLevelLoadEffects();
    UFUNCTION(BlueprintCallable) void CharacterPreviewUpdated(FCharacterCosmetics CosmeticData);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void DisableDioramaPreview(bool IsEndingPlay);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void EndLevelLoadEffects();
    UFUNCTION() void ExecuteUbergraph_BP_PlayerPreviewManager(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitPreviewCharacter(FCharacterCosmetics CosmeticData);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void LevelLoaded__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnLevelLoaded();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateCharacterPreview(FCharacterCosmetics CosmeticData, FPreviewCameraSettingsEnum NewCameraFocus, TSoftObjectPtr<UWorld> Diorama, bool ForceWearSpacesuit);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void UpdateCurrentDiorama();
};
