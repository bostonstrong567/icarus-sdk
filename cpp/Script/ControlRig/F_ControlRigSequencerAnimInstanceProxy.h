// /Script/ControlRig.ControlRigSequencerAnimInstanceProxy
// size 0xCC0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Sequencer/ControlRigSequencerAnimInstanceProxy.h

USTRUCT()
struct FControlRigSequencerAnimInstanceProxy : public FAnimSequencerInstanceProxy
{
private:
    FAnimNode_LayeredBoneBlend LayeredBoneBlendNode;  // 0x0A10, not reflected
    FAnimNode_LayeredBoneBlend AdditiveLayeredBoneBlendNode;  // 0x0AD0, not reflected
    FAnimNode_BlendListByBool BoolBlendNode;  // 0x0B90, not reflected
    FAnimNode_SequencePlayer PreviewPlayerNode;  // 0x0C30, not reflected
    bool bLayeredBlendChanged;  // 0x0CB0, not reflected
    bool bAdditiveLayeredBlendChanged;  // 0x0CB1, not reflected
};
