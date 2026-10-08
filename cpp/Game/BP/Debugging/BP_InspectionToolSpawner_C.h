// /Game/BP/Debugging/BP_InspectionToolSpawner.BP_InspectionToolSpawner_C
// Derives from: AActor > UObject
// size 0x280, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_InspectionToolSpawner_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Distance;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ImpactPoint;  // 0x0244, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UPhysicalMaterial* PhysicalMaterial;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* HitActor;  // 0x0258, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPrimitiveComponent* HitComponent;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName BoneName;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HoldTrace;  // 0x0270, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_InspectionToolPopup_C* UMGWidgetRef;  // 0x0278, size 0x8

    UFUNCTION(BlueprintCallable) void DisplayWidget();
    UFUNCTION() void ExecuteUbergraph_BP_InspectionToolSpawner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void KillActor(float InLifespan);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
