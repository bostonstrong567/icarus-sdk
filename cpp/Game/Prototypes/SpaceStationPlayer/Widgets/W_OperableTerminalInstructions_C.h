// /Game/Prototypes/SpaceStationPlayer/Widgets/W_OperableTerminalInstructions.W_OperableTerminalInstructions_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_OperableTerminalInstructions_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* SlideIn;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_484;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* InstructionsTextBlock;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText InstructionsText;  // 0x0280, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_W_OperableTerminalInstructions(int32 EntryPoint);  // parameters 0x4
};
