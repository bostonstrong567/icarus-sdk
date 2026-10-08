// /Script/InteractiveToolsFramework.TransformProxy
// Derives from: UObject
// size 0xF0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/TransformProxy.h

UCLASS(Transient)
class UTransformProxy : public UObject
{
public:
    UPROPERTY() bool bRotatePerObject;  // 0x0070, size 0x1
    UPROPERTY() bool bSetPivotMode;  // 0x0071, size 0x1
    UPROPERTY() FTransform SharedTransform;  // 0x0090, size 0x30
    UPROPERTY() FTransform InitialSharedTransform;  // 0x00C0, size 0x30

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(UTransformProxy *,FTransform),FDefaultDelegateUserPolicy> OnTransformChanged;  // 0x0028
    TMulticastDelegate<void __cdecl(UTransformProxy *),FDefaultDelegateUserPolicy> OnBeginTransformEdit;  // 0x0040
    TMulticastDelegate<void __cdecl(UTransformProxy *),FDefaultDelegateUserPolicy> OnEndTransformEdit;  // 0x0058
    TArray<UTransformProxy::FRelativeObject,TSizedDefaultAllocator<32> > Objects;  // 0x0078, protected

    // Virtual functions that start here:
    //   AddComponent, BeginTransformEditSequence, EndTransformEditSequence, GetTransform, SetTransform
    //   UpdateObjectTransforms, UpdateObjects, UpdateSharedTransform
};
