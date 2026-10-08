// /Game/BP/Quests/Common/BPQ_Common_MapIconOnArrival_WithBeacon_Subquests.BPQ_Common_MapIconOnArrival_WithBeacon_Subquests_C
// Derives from: ABPQ_Common_MapIconOnArrival_Subquests_C > AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_MapIconOnArrival_WithBeacon_Subquests_C : public ABPQ_Common_MapIconOnArrival_Subquests_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBPC_RecoveryBeacon_C* BPC_RecoveryBeacon;  // 0x0490, size 0x8
};
