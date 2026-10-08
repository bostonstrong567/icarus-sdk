// /Game/BP/DropShipEditor/UMG_PalettePanel.UMG_PalettePanel_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PalettePanel_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_84;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableText* ShipName;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropShipOperationClear_C* UMG_DropShipOperationClear;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropShipOperationRadialState_C* UMG_DropShipOperationRadialState;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropShipOperationSave_C* UMG_DropShipOperationSave;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropShipOperationUndo_C* UMG_DropShipOperationUndo;  // 0x0288, size 0x8
};
