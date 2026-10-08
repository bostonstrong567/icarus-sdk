// /Script/Icarus.TalentTreeCanvas
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, declared in Icarus/Source/Icarus/Talents/View/TalentTreeCanvas.h

UCLASS(EditInlineNew)
class UTalentTreeCanvas : public UUserWidget
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<UTalentTreeCanvas::FLineData,TSizedDefaultAllocator<32> > Lines;  // 0x0260, protected
    FTalentTreesRowHandle TalentTree;  // 0x0270, protected
    FTalentViewsRowHandle ViewData;  // 0x0288, protected
    UTalentModelInterface_Const * CachedModel;  // 0x02A0, protected
    bool bDirty;  // 0x02A8, protected

    UFUNCTION() void Refresh(UTalentModelInterface_Const* Model);  // parameters 0x8
    UFUNCTION() void Reset(UTalentModelInterface_Const* Model);  // parameters 0x8
};
