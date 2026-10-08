// /Script/Engine.LevelStreaming
// Derives from: UObject
// size 0x160, declared in Engine/Source/Runtime/Engine/Classes/Engine/LevelStreaming.h

UCLASS(Abstract, EditInlineNew)
class ULevelStreaming : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftObjectPtr<UWorld> WorldAsset;  // 0x0028, size 0x28
    UPROPERTY() FName PackageNameToLoad;  // 0x0050, size 0x8
    UPROPERTY() TArray<FName> LODPackageNames;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform LevelTransform;  // 0x0080, size 0x30
    UPROPERTY(Transient, BlueprintReadWrite) int32 LevelLODIndex;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StreamingPriority;  // 0x00B4, size 0x4
    UPROPERTY(BlueprintReadWrite) uint8 bShouldBeVisible : 1;  // 0x00BA, mask 0x08
    UPROPERTY(BlueprintReadWrite) uint8 bShouldBeLoaded : 1;  // 0x00BA, mask 0x10
    UPROPERTY() uint8 bLocked : 1;  // 0x00BA, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bIsStatic : 1;  // 0x00BA, mask 0x40
    UPROPERTY(BlueprintReadWrite) uint8 bShouldBlockOnLoad : 1;  // 0x00BA, mask 0x80
    UPROPERTY(BlueprintReadWrite) uint8 bShouldBlockOnUnload : 1;  // 0x00BB, mask 0x01
    UPROPERTY(Transient, BlueprintReadWrite) uint8 bDisableDistanceStreaming : 1;  // 0x00BB, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bDrawOnLevelStatusMap : 1;  // 0x00BB, mask 0x04
    UPROPERTY(EditAnywhere) FLinearColor LevelColor;  // 0x00BC, size 0x10
    UPROPERTY(EditAnywhere) TArray<ALevelStreamingVolume*> EditorStreamingVolumes;  // 0x00D0, size 0x10
    UPROPERTY(EditAnywhere) float MinTimeBetweenVolumeUnloadRequests;  // 0x00E0, size 0x4
    UPROPERTY(BlueprintAssignable) FLevelStreamingLoadedStatus OnLevelLoaded;  // 0x00E8, size 0x10
    UPROPERTY(BlueprintAssignable) FLevelStreamingLoadedStatus OnLevelUnloaded;  // 0x00F8, size 0x10
    UPROPERTY(BlueprintAssignable) FLevelStreamingLoadedStatus OnDynamicLevelUnloaded;  // 0x0108, size 0x10
    UPROPERTY(BlueprintAssignable) FLevelStreamingVisibilityStatus OnLevelShown;  // 0x0118, size 0x10
    UPROPERTY(BlueprintAssignable) FLevelStreamingVisibilityStatus OnLevelHidden;  // 0x0128, size 0x10
    UPROPERTY(Transient) ULevel* LoadedLevel;  // 0x0138, size 0x8
    UPROPERTY(Transient) ULevel* PendingUnloadLevel;  // 0x0140, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TArray<FName,TSizedDefaultAllocator<32> > LODPackageNamesToLoad;  // 0x0068
    ULevelStreaming::ECurrentState CurrentState;  // 0x00B8, private
    ULevelStreaming::ETargetState TargetState;  // 0x00B9, private
    uint8 : 1 bIsRequestingUnloadAndRemoval;  // 0x00BA, private
    uint8 : 1 bHasCachedWorldAssetPackageFName;  // 0x00BA, private
    uint8 : 1 bHasCachedLoadedLevelPackageName;  // 0x00BA, private
    float LastVolumeUnloadRequestTime;  // 0x00E4
    FName CachedWorldAssetPackageFName;  // 0x0148, private
    FName CachedLoadedLevelPackageName;  // 0x0150, private

    UFUNCTION(BlueprintCallable) ULevelStreaming* CreateInstance(FString UniqueInstanceName);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetIsRequestingUnloadAndRemoval() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) ALevelScriptActor* GetLevelScriptActor();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) ULevel* GetLoadedLevel() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetWorldAssetPackageFName() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLevelLoaded() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLevelVisible() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsStreamingStatePending() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetIsRequestingUnloadAndRemoval(bool bInIsRequestingUnloadAndRemoval);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLevelLODIndex(int32 LODIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPriority(int32 NewPriority);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetShouldBeLoaded(bool bInShouldBeLoaded);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetShouldBeVisible(bool bInShouldBeVisible);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldBeLoaded() const;  // parameters 0x1

    // Virtual functions that start here:
    //   SetShouldBeLoaded, ShouldBeAlwaysLoaded, ShouldBeLoaded, ShouldBeVisible
};
