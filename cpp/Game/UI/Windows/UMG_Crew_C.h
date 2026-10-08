// /Game/UI/Windows/UMG_Crew.UMG_Crew_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x268, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Crew_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CrewMate_C* UMG_CrewMate;  // 0x0260, size 0x8
};
