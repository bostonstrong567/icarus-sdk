// /Game/BP/Quests/GreatHunts/Ape/C2/BPQ_GH_Ape_C2_Defend.BPQ_GH_Ape_C2_Defend_C
// Derives from: ABPQ_Common_Clear_Area_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_C2_Defend_C : public ABPQ_Common_Clear_Area_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle TrackedCreature;  // 0x04A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CreaturesSpawned;  // 0x04C0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CreatureSpawned_Event_0(AActor* Creature);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_C2_Defend(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
