// /Script/Engine.NavAreaBase
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h

UCLASS(Abstract, Config=Engine)
class UNavAreaBase : public UObject
{
protected:
    uint8 : 1 bIsMetaArea;  // 0x0028, not reflected

    // Virtual functions that start here:
    //   IsLowArea, IsMetaArea, PickAreaClassForAgent
};
