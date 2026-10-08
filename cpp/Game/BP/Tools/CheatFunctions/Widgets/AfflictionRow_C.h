// /Game/BP/Tools/CheatFunctions/Widgets/AfflictionRow.AfflictionRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UAfflictionRow_C : public UUserWidget, public ILessInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RowText;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RowName;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DisplayName;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString RowNameStr;  // 0x0280, size 0x10

    UFUNCTION() void ExecuteUbergraph_AfflictionRow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool LessThan(UObject* Other) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void Set_Row(FName RowName);  // parameters 0x8, named "Set Row"
};
