// /Game/UI/Hab/DropTerminal/UMG_ProspectObjectiveEntry.UMG_ProspectObjectiveEntry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectObjectiveEntry_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ObjectiveText;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FQuestsRowHandle QuestRow;  // 0x0270, size 0x18

    UFUNCTION() void ExecuteUbergraph_UMG_ProspectObjectiveEntry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
