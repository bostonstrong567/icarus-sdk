// /Game/BP/Tools/CheatFunctions/DialogueCFRow.DialogueCFRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UDialogueCFRow_C : public UUserWidget, public ILessInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RowText;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RowName;  // 0x0270, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_DialogueCFRow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool LessThan(UObject* Other) const;  // parameters 0x9
};
