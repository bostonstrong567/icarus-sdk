// /Script/Engine.CompressedTrack
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimSequence.h

USTRUCT()
struct FCompressedTrack
{
public:
    UPROPERTY() TArray<uint8> ByteStream;  // 0x0000, size 0x10
    UPROPERTY() TArray<float> Times;  // 0x0010, size 0x10
    UPROPERTY() float Mins;  // 0x0020, size 0x4
    UPROPERTY() float Ranges;  // 0x002C, size 0x4
};
