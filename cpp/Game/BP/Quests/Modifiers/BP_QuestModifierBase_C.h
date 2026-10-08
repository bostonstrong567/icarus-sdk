// /Game/BP/Quests/Modifiers/BP_QuestModifierBase.BP_QuestModifierBase_C
// Derives from: UQuestModifierBase > UActorComponent > UObject
// size 0xF0, a blueprint class, blueprint

UCLASS(Abstract, Config=Engine)
class UBP_QuestModifierBase_C : public UQuestModifierBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FQuestModifiersMultiRowHandle QuestModifierRow;  // 0x00D0, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) UObject* OwningQuest;  // 0x00E8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_QuestModifierBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitQuestListening();
    UFUNCTION(BlueprintCallable) void OwningQuestStateUpdated(uint8 QuestState);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
