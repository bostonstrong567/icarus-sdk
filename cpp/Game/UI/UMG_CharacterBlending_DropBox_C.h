// /Game/UI/UMG_CharacterBlending_DropBox.UMG_CharacterBlending_DropBox_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x271, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CharacterBlending_DropBox_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCustomComboBox* ComboBox;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EFaceShapes> DefaultFaceShape;  // 0x0270, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_CharacterBlending_DropBox(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSelectedOption(TEnumAsByte<EFaceShapes> FaceShape);  // parameters 0x1
};
