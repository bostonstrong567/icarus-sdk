// /Script/Engine.ReporterGraph
// Derives from: UReporterBase > UObject
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Debug/ReporterGraph.h

UCLASS()
class UReporterGraph : public UReporterBase
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FRect GraphScreenSize;  // 0x0030
    FRect GraphMinMaxData;  // 0x0040
    TArray<FGraphThreshold,TSizedDefaultAllocator<32> > Thresholds;  // 0x0050
    TArray<FGraphLine,TSizedDefaultAllocator<32> > CurrentData;  // 0x0060
    FLinearColor AxesColor;  // 0x0070
    int32 NumXNotches;  // 0x0080
    int32 NumYNotches;  // 0x0084
    EGraphAxisStyle::Type AxisStyle;  // 0x0088
    EGraphDataStyle::Type DataStyle;  // 0x008C
    ELegendPosition::Type LegendPosition;  // 0x0090
    float LegendWidth;  // 0x0094
    FColor BackgroundColor;  // 0x0098
    float CursorLocation;  // 0x009C
    int32 : 1 bOffsetDataSets;  // 0x00A0
    int32 : 1 bUseTinyFont;  // 0x00A0
    int32 : 1 bDrawCursorOnGraph;  // 0x00A0
    int32 : 1 bDrawExtremes;  // 0x00A0
};
