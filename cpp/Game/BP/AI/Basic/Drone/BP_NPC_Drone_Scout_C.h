// /Game/BP/AI/Basic/Drone/BP_NPC_Drone_Scout.BP_NPC_Drone_Scout_C
// Derives from: ABP_NPC_Drone_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xDA8, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Drone_Scout_C : public ABP_NPC_Drone_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Drone_EngineHeat_M;  // 0x0D70, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Drone_EngineHeat_R;  // 0x0D78, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Drone_EngineHeat_L;  // 0x0D80, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_WingRear;  // 0x0D88, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_BodyStrong;  // 0x0D90, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* Capsule_L;  // 0x0D98, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* Capsule_R;  // 0x0DA0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
};
