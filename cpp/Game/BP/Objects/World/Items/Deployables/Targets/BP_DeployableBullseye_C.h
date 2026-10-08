// /Game/BP/Objects/World/Items/Deployables/Targets/BP_DeployableBullseye.BP_DeployableBullseye_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x798, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DeployableBullseye_C : public ABP_DeployableBase_C, public ICriticalHitReceiver
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Collision4;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube2;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube1;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Collision2;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Collision1;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Collision5;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Collision3;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* White;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* Green;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* Blue;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Red;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpotLightComponent* SpotLight1;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0790, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FCriticalHitAreasEnum GetDefaultCriticalArea() const;  // parameters 0x10
};
