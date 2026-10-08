// /Game/UI/Hab/DropTerminal/UMG_ProspectPinFactionMission.UMG_ProspectPinFactionMission_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectPinFactionMission_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* FactionLogo;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* MissionTypeIcon;  // 0x0268, size 0x8
};
