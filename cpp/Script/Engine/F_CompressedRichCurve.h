// /Script/Engine.CompressedRichCurve
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Curves/RichCurve.h

USTRUCT()
struct FCompressedRichCurve
{

    // Not reflected:
    TEnumAsByte<enum ERichCurveCompressionFormat> CompressionFormat;  // 0x0000
    TEnumAsByte<enum ERichCurveKeyTimeCompressionFormat> KeyTimeCompressionFormat;  // 0x0001
    TEnumAsByte<enum ERichCurveExtrapolation> PreInfinityExtrap;  // 0x0002
    TEnumAsByte<enum ERichCurveExtrapolation> PostInfinityExtrap;  // 0x0003
    FCompressedRichCurve::TConstantValueNumKeys ConstantValueNumKeys;  // 0x0004
    TArray<unsigned char,TSizedDefaultAllocator<32> > CompressedKeys;  // 0x0008
};
