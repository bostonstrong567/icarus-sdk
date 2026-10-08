// /Game/BP/DropShipEditor/UMG_UserInterface_DropshipEditor.UMG_UserInterface_DropshipEditor_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x488, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_UserInterface_DropshipEditor_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* CursorItemSize;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* CursorScaleBox;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* HUD;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Interaction;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* MainDisplay;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* MainScaleBox;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* MainSize;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* Menus;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropShipEditorControls_C* UMG_DropShipEditorControls;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropShipOperationExit_C* UMG_DropShipOperationExit;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropShipEditingTools_C* UMG_DropShipPartSelector;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropShipAttributeDisplay_C* UMG_DropShipStatus;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EscapeMenu_C* UMG_EscapeMenu;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PalettePanel_C* UMG_PalettePanel;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SpaceMenuHeader_C* UMG_SpaceMenuHeader;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FKey, StaticWidget> StaticWidgets;  // 0x02E0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FKey, bool> ImportantKeys;  // 0x0330, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TEnumAsByte<EModifierKeys>, FModifierKeyValues> ModifierKeys;  // 0x0380, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_PartBase_C* LastHitActor;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_PartBase_C* DraggingObject;  // 0x03D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SocketName;  // 0x03E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusRocketPartConnector* DraggingConnection;  // 0x03E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusRocketPartConnector* LastHitConnection;  // 0x03F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Last_Hit_Socket;  // 0x03F8, size 0x8, named "Last Hit Socket"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DraggingSocket;  // 0x0400, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector HitPoint;  // 0x0408, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<DropShipEditorPlacementMode> PlacementMode;  // 0x0414, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_PartBase_C* HitPart;  // 0x0418, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector HitPartImpact;  // 0x0420, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector HitPartNormal;  // 0x042C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_PartBase_C*> MirrorParts;  // 0x0438, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector MirrorLocation;  // 0x0448, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator MirrorRotation;  // 0x0454, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector MirrorEnd;  // 0x0460, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Mirror_Parts;  // 0x046C, size 0x4, named "Mirror Parts"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Mirror_Degrees;  // 0x0470, size 0x4, named "Mirror Degrees"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MirrorPartIndex;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ValidMirror;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShipUpdated;  // 0x0479, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_PlayerDropShip_C* PlayerDropShip;  // 0x0480, size 0x8

    UFUNCTION(BlueprintCallable) void Clear();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DestroyConnections();
    UFUNCTION(BlueprintCallable) void EstablishConnection();
    UFUNCTION() void ExecuteUbergraph_UMG_UserInterface_DropshipEditor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HideEscapeMenu();
    UFUNCTION(BlueprintCallable) void IsKeyDown(TEnumAsByte<EModifierKeys> Key, bool& KeyHeld);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void IteratePlacementMode();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable) void PlacePart();
    UFUNCTION(BlueprintCallable) void RemovePart(AIcarusRocketPart* Part);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ScaleWidget(UScaleBox* ScaleBox);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetDropship(ABP_PlayerDropShip_C* DropShip);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ShowEscapeMenu();
    UFUNCTION(BlueprintCallable) void SpawnActor(FItemTemplateRowHandle ItemTemplate);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
