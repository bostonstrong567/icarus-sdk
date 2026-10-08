// /Game/BP/AI/Bosses/Misc/BP_CaveWorm_Spit.BP_CaveWorm_Spit_C
// Derives from: ABP_SandWorm_Spit_C > ASkeletalProjectile > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_CaveWorm_Spit_C : public ABP_SandWorm_Spit_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0598, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_CaveWorm_Spit(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnProjectileActivated();
    UFUNCTION(BlueprintImplementableEvent) void OnProjectileDeactivated();
};
