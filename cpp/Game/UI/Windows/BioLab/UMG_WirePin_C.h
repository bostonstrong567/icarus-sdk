// /Game/UI/Windows/BioLab/UMG_WirePin.UMG_WirePin_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_WirePin_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pin;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Unfocused_Wire_Colour;  // 0x0270, size 0x10, named "Unfocused Wire Colour"

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_WirePin(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPinSize(FVector2D& Size);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetPinColour(FLinearColor InColorAndOpacity);  // parameters 0x10
};
