// /Game/BP/Objects/World/Items/Deployables/Targets/BP_DeployableTargetDummy.BP_DeployableTargetDummy_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x750, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DeployableTargetDummy_C : public ABP_DeployableBase_C, public ICriticalHitReceiver
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Limb_3;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Limb_2;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Limb_1;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Limb_0;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_HighDmg;  // 0x0748, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FCriticalHitAreasEnum GetDefaultCriticalArea() const;  // parameters 0x10
};
