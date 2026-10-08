// /Script/Icarus.DeltaTimeBuffer
// size 0x20, declared in Icarus/Source/Icarus/DeltaTimeBuffer.h

USTRUCT()
struct FDeltaTimeBuffer
{

    // Not reflected:
    TCircularBuffer<int> Buffer;  // 0x0000
    int32 CurrentIndex;  // 0x0018
    float EmplacedDeltaTime;  // 0x001C
};
