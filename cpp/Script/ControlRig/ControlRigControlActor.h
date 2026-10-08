// /Script/ControlRig.ControlRigControlActor
// Derives from: AActor > UObject
// size 0x2B8, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/ControlRigControlActor.h

UCLASS(Config=Engine)
class AControlRigControlActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* ActorToTrack;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UControlRig> ControlRigClass;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRefreshOnTick;  // 0x0230, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsSelectable;  // 0x0231, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* MaterialOverride;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ColorParameter;  // 0x0240, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCastShadows;  // 0x0250, size 0x1
    UPROPERTY(Instanced) USceneComponent* ActorRootComponent;  // 0x0258, size 0x8
    UPROPERTY(Transient) UControlRig* ControlRig;  // 0x0260, size 0x8
    UPROPERTY(Transient) TArray<FName> ControlNames;  // 0x0268, size 0x10
    UPROPERTY(Transient) TArray<FTransform> GizmoTransforms;  // 0x0278, size 0x10
    UPROPERTY(Transient) TArray<UStaticMeshComponent*> Components;  // 0x0288, size 0x10
    UPROPERTY(Transient) TArray<UMaterialInstanceDynamic*> Materials;  // 0x0298, size 0x10
    UPROPERTY(Transient) FName ColorParameterName;  // 0x02A8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FDelegateHandle OnUnbindDelegate;  // 0x02B0, private

    UFUNCTION(BlueprintCallable) void Clear();
    UFUNCTION(BlueprintCallable) void Refresh();
};
