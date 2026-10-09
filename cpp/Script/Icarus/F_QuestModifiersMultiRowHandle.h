// /Script/Icarus.QuestModifiersMultiRowHandle
// size 0x18, declared in Icarus/Source/Icarus/IcarusGenerated/QuestModifiers/QuestModifiersMultiRowHandle.h

USTRUCT()
struct FQuestModifiersMultiRowHandle : public FMultiRowHandle
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) EQuestModifiersTableType DataTableName;  // 0x0010, size 0x1
};
