// /Script/InteractiveToolsFramework.InputRayHit
// size 0x28, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InputState.h

USTRUCT()
struct FInputRayHit
{
public:
    bool bHit;  // 0x0000, not reflected
    float HitDepth;  // 0x0004, not reflected
    FVector HitNormal;  // 0x0008, not reflected
    bool bHasHitNormal;  // 0x0014, not reflected
    int32 HitIdentifier;  // 0x0018, not reflected
    void * HitOwner;  // 0x0020, not reflected
};
