// /Game/BP/Quests/Common/BPQ_Common_InteractWithDropship.BPQ_Common_InteractWithDropship_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_InteractWithDropship_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Common_InteractWithDropship(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InteractWithShip(AIcarusPlayerCharacter* Player, AIcarusRocket* DropShip);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
