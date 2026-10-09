// /Script/Icarus.TalentTreeCanvas
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, declared in Icarus/Source/Icarus/Talents/View/TalentTreeCanvas.h

UCLASS(EditInlineNew)
class UTalentTreeCanvas : public UUserWidget
{
protected:
    TArray<UTalentTreeCanvas::FLineData,TSizedDefaultAllocator<32> > Lines;  // 0x0260, not reflected
    FTalentTreesRowHandle TalentTree;  // 0x0270, not reflected
    FTalentViewsRowHandle ViewData;  // 0x0288, not reflected
    UTalentModelInterface_Const * CachedModel;  // 0x02A0, not reflected
    bool bDirty;  // 0x02A8, not reflected
public:
    UFUNCTION() void Refresh(UTalentModelInterface_Const* Model);  // parameters 0x8
    UFUNCTION() void Reset(UTalentModelInterface_Const* Model);  // parameters 0x8
};
