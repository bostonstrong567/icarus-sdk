// /Script/Engine.PoseLinkBase
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h

USTRUCT()
struct FPoseLinkBase
{
public:
    UPROPERTY() int32 LinkID;  // 0x0000, size 0x4
protected:
    bool bProcessed;  // 0x0004, not reflected
    FAnimNode_Base * LinkedNode;  // 0x0008, not reflected
};
