// /Game/BP/Quests/Olympus/Glacier/Expedition/BPQ_Glacier_OLY_Expedition.BPQ_Glacier_OLY_Expedition_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Glacier_OLY_Expedition_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool foundstorm;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle ClearSkyDialogue;  // 0x0474, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle EnterArcticDialogue;  // 0x048C, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Glacier_OLY_Expedition(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
