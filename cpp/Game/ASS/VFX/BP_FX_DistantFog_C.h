// /Game/ASS/VFX/BP_FX_DistantFog.BP_FX_DistantFog_C
// Derives from: AActor > UObject
// size 0x238, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FX_DistantFog_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_AtmosphereController_C* AtmosphereController;  // 0x0230, size 0x8

    UFUNCTION(BlueprintCallable) void UpdateScale(ABP_AtmosphereController_C* AtmosController);  // parameters 0x8
};
