// /Game/BP/AI/Basic/Caves/BP_CRE_LandShark.BP_CRE_LandShark_C
// Derives from: ABP_FactionBoss_SandWorm_C > ABP_FactionBoss_Base_C > AIcarusPawn > APawn > AActor > UObject
// size 0x680, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_CRE_LandShark_C : public ABP_FactionBoss_SandWorm_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0660, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVocalisationComponent* Vocalisation;  // 0x0668, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* LootBagLocation;  // 0x0670, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioContextComponent* AudioContext;  // 0x0678, size 0x8

    UFUNCTION(BlueprintCallable) void DropScales(AActor* Causer, int32 DamageTaken);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_CRE_LandShark(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) EMusicConditionCombatState GetCombatMusicConditionOverride(AIcarusPlayerCharacter* TargetPlayer, float Threat);  // parameters 0xD
    UFUNCTION(BlueprintImplementableEvent) void OnActorDeath(UActorState* ActorStateIn);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SpawnLootBag();
};
