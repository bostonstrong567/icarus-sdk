// /Script/ControlRig.AdditiveControlRig
// Derives from: UControlRig > UObject
// size 0x660, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/AdditiveControlRig.h

UCLASS(EditInlineNew)
class UAdditiveControlRig : public UControlRig
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<FRigUnit_AddBoneTransform,TSizedDefaultAllocator<32> > AddBoneRigUnits;  // 0x0650, private
};
