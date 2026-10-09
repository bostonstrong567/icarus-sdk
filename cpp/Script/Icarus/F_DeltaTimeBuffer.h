// /Script/Icarus.DeltaTimeBuffer
// size 0x20, declared in Icarus/Source/Icarus/DeltaTimeBuffer.h

USTRUCT()
struct FDeltaTimeBuffer
{
private:
    TCircularBuffer<int> Buffer;  // 0x0000, not reflected
    int32 CurrentIndex;  // 0x0018, not reflected
    float EmplacedDeltaTime;  // 0x001C, not reflected
};
