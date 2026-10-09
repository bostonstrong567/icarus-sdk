// /Script/Engine.ReporterGraph
// Derives from: UReporterBase > UObject
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Debug/ReporterGraph.h

UCLASS()
class UReporterGraph : public UReporterBase
{
public:
    FRect GraphScreenSize;  // 0x0030, not reflected
    FRect GraphMinMaxData;  // 0x0040, not reflected
    TArray<FGraphThreshold,TSizedDefaultAllocator<32> > Thresholds;  // 0x0050, not reflected
    TArray<FGraphLine,TSizedDefaultAllocator<32> > CurrentData;  // 0x0060, not reflected
    FLinearColor AxesColor;  // 0x0070, not reflected
    int32 NumXNotches;  // 0x0080, not reflected
    int32 NumYNotches;  // 0x0084, not reflected
    EGraphAxisStyle::Type AxisStyle;  // 0x0088, not reflected
    EGraphDataStyle::Type DataStyle;  // 0x008C, not reflected
    ELegendPosition::Type LegendPosition;  // 0x0090, not reflected
    float LegendWidth;  // 0x0094, not reflected
    FColor BackgroundColor;  // 0x0098, not reflected
    float CursorLocation;  // 0x009C, not reflected
    int32 : 1 bDrawCursorOnGraph;  // 0x00A0, not reflected
    int32 : 1 bDrawExtremes;  // 0x00A0, not reflected
    int32 : 1 bOffsetDataSets;  // 0x00A0, not reflected
    int32 : 1 bUseTinyFont;  // 0x00A0, not reflected
};
