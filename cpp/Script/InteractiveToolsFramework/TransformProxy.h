// /Script/InteractiveToolsFramework.TransformProxy
// Derives from: UObject
// size 0xF0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/TransformProxy.h

UCLASS(Transient)
class UTransformProxy : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    TMulticastDelegate<void __cdecl(UTransformProxy *,FTransform),FDefaultDelegateUserPolicy> OnTransformChanged;  // 0x0028, not reflected
    TMulticastDelegate<void __cdecl(UTransformProxy *),FDefaultDelegateUserPolicy> OnBeginTransformEdit;  // 0x0040, not reflected
    TMulticastDelegate<void __cdecl(UTransformProxy *),FDefaultDelegateUserPolicy> OnEndTransformEdit;  // 0x0058, not reflected
    UPROPERTY() bool bRotatePerObject;  // 0x0070, size 0x1
    UPROPERTY() bool bSetPivotMode;  // 0x0071, size 0x1
protected:
    TArray<UTransformProxy::FRelativeObject,TSizedDefaultAllocator<32> > Objects;  // 0x0078, not reflected
    UPROPERTY() FTransform SharedTransform;  // 0x0090, size 0x30
    UPROPERTY() FTransform InitialSharedTransform;  // 0x00C0, size 0x30

    // Virtual functions that start here:
    //   AddComponent, BeginTransformEditSequence, EndTransformEditSequence, GetTransform, SetTransform
    //   UpdateObjectTransforms, UpdateObjects, UpdateSharedTransform
};
