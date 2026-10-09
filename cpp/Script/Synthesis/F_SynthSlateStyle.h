// /Script/Synthesis.SynthSlateStyle
// size 0x10, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Public/UI/SynthSlateStyle.h

USTRUCT()
struct FSynthSlateStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynthSlateSizeType SizeType;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynthSlateColorStyle ColorStyle;  // 0x0009, size 0x1
};
