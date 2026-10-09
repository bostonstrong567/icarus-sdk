// /Script/Engine.SceneCaptureComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x2B0, declared in Engine/Source/Runtime/Engine/Classes/Components/SceneCaptureComponent.h

UCLASS(Abstract, Config=Engine)
class USceneCaptureComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESceneCapturePrimitiveRenderMode PrimitiveRenderMode;  // 0x01F8, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) TEnumAsByte<ESceneCaptureSource> CaptureSource;  // 0x01F9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCaptureEveryFrame : 1;  // 0x01FA, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCaptureOnMovement : 1;  // 0x01FA, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAlwaysPersistRenderingState;  // 0x01FB, size 0x1
    UPROPERTY() TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents;  // 0x0200, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> HiddenActors;  // 0x0210, size 0x10
    UPROPERTY() TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowOnlyComponents;  // 0x0220, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> ShowOnlyActors;  // 0x0230, size 0x10
    UPROPERTY(EditAnywhere) float LODDistanceFactor;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxViewDistanceOverride;  // 0x0244, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 CaptureSortPriority;  // 0x0248, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseRayTracingIfEnabled;  // 0x024C, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) TArray<FEngineShowFlagsSetting> ShowFlagSettings;  // 0x0250, size 0x10
    FEngineShowFlags ShowFlags;  // 0x0260, not reflected
    EStereoscopicPass CaptureStereoPass;  // 0x0288, not reflected
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FString ProfilingEventName;  // 0x0290, size 0x10
protected:
    TIndirectArray<FSceneViewStateReference,TSizedDefaultAllocator<32> > ViewStates;  // 0x02A0, not reflected
public:
    UFUNCTION(BlueprintCallable) void ClearHiddenComponents();
    UFUNCTION(BlueprintCallable) void ClearShowOnlyComponents();
    UFUNCTION(BlueprintCallable) void HideActorComponents(AActor* InActor, bool bIncludeFromChildActors);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void HideComponent(UPrimitiveComponent* InComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveShowOnlyActorComponents(AActor* InActor, bool bIncludeFromChildActors);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void RemoveShowOnlyComponent(UPrimitiveComponent* InComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetCaptureSortPriority(int32 NewCaptureSortPriority);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ShowOnlyActorComponents(AActor* InActor, bool bIncludeFromChildActors);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void ShowOnlyComponent(UPrimitiveComponent* InComponent);  // parameters 0x8

    // Virtual functions that start here:
    //   GetViewOwner, UpdateSceneCaptureContents
};
