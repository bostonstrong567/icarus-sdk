// /Game/BP/AI/Basic/Caves/BP_CRE_Teenage_Caveworm_Friendly.BP_CRE_Teenage_Caveworm_Friendly_C
// Derives from: ABP_CRE_CaveWorm_C > ABP_FactionBoss_SandWorm_C > ABP_FactionBoss_Base_C > AIcarusPawn > APawn > AActor > UObject
// size 0x6D8, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_CRE_Teenage_Caveworm_Friendly_C : public ABP_CRE_CaveWorm_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x06D0, size 0x8

    UFUNCTION(BlueprintCallable) void DropScales(AActor* Causer, int32 DamageTaken);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_CRE_Teenage_Caveworm_Friendly(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) EMusicConditionCombatState GetCombatMusicConditionOverride(AIcarusPlayerCharacter* TargetPlayer, float Threat);  // parameters 0xD
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
