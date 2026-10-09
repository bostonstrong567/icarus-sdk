// /Script/Icarus.RadiationFxSphere
// Derives from: AActor > UObject
// size 0x250, declared in Icarus/Source/Icarus/Radiation/RadiationFxSphere.h

UCLASS(Config=Engine)
class ARadiationFxSphere : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 EffectRadius;  // 0x0230, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) uint8 bIsMovable : 1;  // 0x0234, mask 0x01
protected:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USphereComponent* SphereComponent;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UInstancedStaticMeshComponent* GasCloudISM;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Seed;  // 0x0238, size 0x4
    UPROPERTY(Transient, BlueprintReadOnly) TArray<ARadiationFxSphere*> CullingSpheres;  // 0x0240, size 0x10
public:
    UFUNCTION(BlueprintImplementableEvent) void GenerateDebugPreview();
    UFUNCTION(BlueprintNativeEvent) bool RegenerateInstanceData();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldCullPoint(const FVector& WorldPoint) const;  // parameters 0xD
    UFUNCTION(BlueprintCallable) bool UpdateCullingData();  // parameters 0x1

    // Virtual functions that start here:
    //   RegenerateInstanceData_Implementation
};
