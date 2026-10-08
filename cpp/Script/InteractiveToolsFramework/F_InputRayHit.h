// /Script/InteractiveToolsFramework.InputRayHit
// size 0x28, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InputState.h

USTRUCT()
struct FInputRayHit
{

    // Not reflected:
    bool bHit;  // 0x0000
    float HitDepth;  // 0x0004
    FVector HitNormal;  // 0x0008
    bool bHasHitNormal;  // 0x0014
    int32 HitIdentifier;  // 0x0018
    void * HitOwner;  // 0x0020
};
