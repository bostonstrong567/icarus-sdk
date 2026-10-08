// /Game/BP/Tools/CheatFunctions/CaveTeleport/UMG_TeleportCheatWidget.UMG_TeleportCheatWidget_C
// Derives from: UUMG_RadarIcon_C > UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x3D8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TeleportCheatWidget_C : public UUMG_RadarIcon_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_TeleportCheatWidget(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void InitialiseIconWidget(FMapIconsRowHandle MapIconData, AActor* OwningActor);  // parameters 0x20
};
