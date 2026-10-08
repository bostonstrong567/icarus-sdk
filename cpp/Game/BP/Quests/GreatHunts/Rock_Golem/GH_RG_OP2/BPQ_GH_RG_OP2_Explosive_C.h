// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_OP2/BPQ_GH_RG_OP2_Explosive.BPQ_GH_RG_OP2_Explosive_C
// Derives from: ABPQ_Retrieve_Item_Base_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_OP2_Explosive_C : public ABPQ_Retrieve_Item_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04D8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_OP2_Explosive(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnCreatureKilledNotify_Event(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
