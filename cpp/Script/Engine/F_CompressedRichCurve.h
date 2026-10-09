// /Script/Engine.CompressedRichCurve
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Curves/RichCurve.h

USTRUCT()
struct FCompressedRichCurve
{
public:
    TEnumAsByte<enum ERichCurveCompressionFormat> CompressionFormat;  // 0x0000, not reflected
    TEnumAsByte<enum ERichCurveKeyTimeCompressionFormat> KeyTimeCompressionFormat;  // 0x0001, not reflected
    TEnumAsByte<enum ERichCurveExtrapolation> PreInfinityExtrap;  // 0x0002, not reflected
    TEnumAsByte<enum ERichCurveExtrapolation> PostInfinityExtrap;  // 0x0003, not reflected
    FCompressedRichCurve::TConstantValueNumKeys ConstantValueNumKeys;  // 0x0004, not reflected
    TArray<unsigned char,TSizedDefaultAllocator<32> > CompressedKeys;  // 0x0008, not reflected
};
