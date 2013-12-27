double r,b,l,t;
	CRect v;
	GetClientRect (&v);
	r=v.right;
	b=v.bottom;
	l=v.left;
	t=v.top;
	//поверхня під столиком
	dc.MoveTo(l+50,b-20);
	dc.LineTo(r-50,b-20);
	dc.LineTo(r-50,b-40);
	dc.LineTo(l+50,b-40);
	dc.LineTo(l+50,b-20);
	//кулька
	dc.MoveTo(r/2+15,t+100);
	dc.AngleArc(r/2,t+100,15,0,360);
}
